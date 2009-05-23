#include <stdio.h>
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>

// In case the machine this is compiled on does not have the most recent platform SDK
// with these values defined, define them here
#ifndef SM_TABLETPC
	#define SM_TABLETPC		86
#endif

#ifndef SM_MEDIACENTER
	#define SM_MEDIACENTER	87
#endif

// Constants that represent registry key names and value names
// to use for detection
const TCHAR *g_szNetfx10RegKeyName = _T("Software\\Microsoft\\.NETFramework\\Policy\\v1.0");
const TCHAR *g_szNetfx10RegKeyValue = _T("3705");
const TCHAR *g_szNetfx10SPxMSIRegKeyName = _T("Software\\Microsoft\\Active Setup\\Installed Components\\{78705f0d-e8db-4b2d-8193-982bdda15ecd}");
const TCHAR *g_szNetfx10SPxOCMRegKeyName = _T("Software\\Microsoft\\Active Setup\\Installed Components\\{FDC11A6F-17D1-48f9-9EA3-9051954BAA24}");
const TCHAR *g_szNetfx11RegKeyName = _T("Software\\Microsoft\\NET Framework Setup\\NDP\\v1.1.4322");
const TCHAR *g_szNetfx20RegKeyName = _T("Software\\Microsoft\\NET Framework Setup\\NDP\\v2.0.50727");
const TCHAR *g_szNetfx30RegKeyName = _T("Software\\Microsoft\\NET Framework Setup\\NDP\\v3.0\\Setup");
const TCHAR *g_szNetfx30SpRegKeyName = _T("Software\\Microsoft\\NET Framework Setup\\NDP\\v3.0");
const TCHAR *g_szNetfx30RegValueName = _T("InstallSuccess");
const TCHAR *g_szNetfx35RegKeyName = _T("Software\\Microsoft\\NET Framework Setup\\NDP\\v3.5");
const TCHAR *g_szNetfxStandardRegValueName = _T("Install");
const TCHAR *g_szNetfxStandardSPxRegValueName = _T("SP");
const TCHAR *g_szNetfxStandardVersionRegValueName = _T("Version");

// Version information for final release of .NET Framework 3.0
const int g_iNetfx30VersionMajor = 3;
const int g_iNetfx30VersionMinor = 0;
const int g_iNetfx30VersionBuild = 4506;
const int g_iNetfx30VersionRevision = 26;

// Version information for final release of .NET Framework 3.5
const int g_iNetfx35VersionMajor = 3;
const int g_iNetfx35VersionMinor = 5;
const int g_iNetfx35VersionBuild = 21022;
const int g_iNetfx35VersionRevision = 8;

// Function prototypes
bool CheckNetfxBuildNumber(const TCHAR*, const TCHAR*, const int, const int, const int, const int);
int GetNetfx10SPLevel();
int GetNetfxSPLevel(const TCHAR*, const TCHAR*);
bool IsCurrentOSTabletMedCenter();
bool IsNetfx10Installed();
bool IsNetfx11Installed();
bool IsNetfx20Installed();
bool IsNetfx30Installed();
bool IsNetfx35Installed();
bool RegistryGetValue(HKEY, const TCHAR*, const TCHAR*, DWORD, LPBYTE, DWORD);

/******************************************************************
Function Name:	IsNetfx10Installed
Description:	Uses the detection method recommended at
                http://msdn.microsoft.com/library/ms994349.aspx
                to determine whether the .NET Framework 1.0 is
                installed on the machine
Inputs:	        NONE
Results:        true if the .NET Framework 1.0 is installed
                false otherwise
******************************************************************/
bool IsNetfx10Installed()
{
	TCHAR szRegValue[MAX_PATH];
	return (RegistryGetValue(HKEY_LOCAL_MACHINE, g_szNetfx10RegKeyName, g_szNetfx10RegKeyValue, NULL, (LPBYTE)szRegValue, MAX_PATH));
}

/******************************************************************
Function Name:	IsNetfx11Installed
Description:	Uses the detection method recommended at
                http://msdn.microsoft.com/library/ms994339.aspx
                to determine whether the .NET Framework 1.1 is
                installed on the machine
Inputs:	        NONE
Results:        true if the .NET Framework 1.1 is installed
                false otherwise
******************************************************************/
bool IsNetfx11Installed()
{
	bool bRetValue = false;
	DWORD dwRegValue=0;

	if (RegistryGetValue(HKEY_LOCAL_MACHINE, g_szNetfx11RegKeyName, g_szNetfxStandardRegValueName, NULL, (LPBYTE)&dwRegValue, sizeof(DWORD)))
	{
		if (1 == dwRegValue)
			bRetValue = true;
	}

	return bRetValue;
}


/******************************************************************
Function Name:	IsNetfx20Installed
Description:	Uses the detection method recommended at
                http://msdn.microsoft.com/library/aa480243.aspx
                to determine whether the .NET Framework 2.0 is
                installed on the machine
Inputs:	        NONE
Results:        true if the .NET Framework 2.0 is installed
                false otherwise
******************************************************************/
bool IsNetfx20Installed()
{
	bool bRetValue = false;
	DWORD dwRegValue=0;

	if (RegistryGetValue(HKEY_LOCAL_MACHINE, g_szNetfx20RegKeyName, g_szNetfxStandardRegValueName, NULL, (LPBYTE)&dwRegValue, sizeof(DWORD)))
	{
		if (1 == dwRegValue)
			bRetValue = true;
	}

	return bRetValue;
}


/******************************************************************
Function Name:	IsNetfx30Installed
Description:	Uses the detection method recommended at
                http://msdn.microsoft.com/library/aa964979.aspx
                to determine whether the .NET Framework 3.0 is
                installed on the machine
Inputs:	        NONE
Results:        true if the .NET Framework 3.0 is installed
                false otherwise
******************************************************************/
bool IsNetfx30Installed()
{
	bool bRetValue = false;
	DWORD dwRegValue=0;

	// Check that the InstallSuccess registry value exists and equals 1
	if (RegistryGetValue(HKEY_LOCAL_MACHINE, g_szNetfx30RegKeyName, g_szNetfx30RegValueName, NULL, (LPBYTE)&dwRegValue, sizeof(DWORD)))
	{
		if (1 == dwRegValue)
			bRetValue = true;
	}

	// A system with a pre-release version of the .NET Framework 3.0 can
	// have the InstallSuccess value.  As an added verification, check the
	// version number listed in the registry
	return (bRetValue && CheckNetfxBuildNumber(g_szNetfx30RegKeyName, g_szNetfxStandardVersionRegValueName, g_iNetfx30VersionMajor, g_iNetfx30VersionMinor, g_iNetfx30VersionBuild, g_iNetfx30VersionRevision));
}


/******************************************************************
Function Name:	IsNetfx35Installed
Description:	Uses the detection method recommended at
                http://msdn.microsoft.com/library/cc160716.aspx
                to determine whether the .NET Framework 3.5 is
                installed on the machine
Inputs:	        NONE
Results:        true if the .NET Framework 3.5 is installed
                false otherwise
******************************************************************/
bool IsNetfx35Installed()
{
	bool bRetValue = false;
	DWORD dwRegValue=0;

	// Check that the Install registry value exists and equals 1
	if (RegistryGetValue(HKEY_LOCAL_MACHINE, g_szNetfx35RegKeyName, g_szNetfxStandardRegValueName, NULL, (LPBYTE)&dwRegValue, sizeof(DWORD)))
	{
		if (1 == dwRegValue)
			bRetValue = true;
	}

	// A system with a pre-release version of the .NET Framework 3.5 can
	// have the Install value.  As an added verification, check the
	// version number listed in the registry
	return (bRetValue && CheckNetfxBuildNumber(g_szNetfx35RegKeyName, g_szNetfxStandardVersionRegValueName, g_iNetfx35VersionMajor, g_iNetfx35VersionMinor, g_iNetfx35VersionBuild, g_iNetfx35VersionRevision));
}


/******************************************************************
Function Name:	GetNetfx10SPLevel
Description:	Uses the detection method recommended at
                http://blogs.msdn.com/astebner/archive/2004/09/14/229802.aspx
                to determine what service pack for the 
                .NET Framework 1.0 is installed on the machine
Inputs:	        NONE
Results:        integer representing SP level for .NET Framework 1.0
******************************************************************/
int GetNetfx10SPLevel()
{
	TCHAR szRegValue[MAX_PATH];
	TCHAR *pszSPLevel = NULL;
	int iRetValue = -1;
	bool bRegistryRetVal = false;

	// Need to detect what OS we are running on so we know what
	// registry key to use to look up the SP level
	if (IsCurrentOSTabletMedCenter())
		bRegistryRetVal = RegistryGetValue(HKEY_LOCAL_MACHINE, g_szNetfx10SPxOCMRegKeyName, g_szNetfxStandardVersionRegValueName, NULL, (LPBYTE)szRegValue, MAX_PATH);
	else
		bRegistryRetVal = RegistryGetValue(HKEY_LOCAL_MACHINE, g_szNetfx10SPxMSIRegKeyName, g_szNetfxStandardVersionRegValueName, NULL, (LPBYTE)szRegValue, MAX_PATH);

	if (bRegistryRetVal)
	{
		// This registry value should be of the format
		// #,#,#####,# where the last # is the SP level
		// Try to parse off the last # here
		pszSPLevel = _tcsrchr(szRegValue, _T(','));
		if (NULL != pszSPLevel)
		{
			// Increment the pointer to skip the comma
			pszSPLevel++;

			// Convert the remaining value to an integer
			iRetValue = _tstoi(pszSPLevel);
		}
	}

	return iRetValue;
}


/******************************************************************
Function Name:	GetNetfxSPLevel
Description:	Determine what service pack is installed for a 
                version of the .NET Framework using registry
				based detection methods documented in the 
				.NET Framework deployment guides.
Inputs:         pszNetfxRegKeyName - registry key name to use for detection
				pszNetfxRegValueName - registry value to use for detection
Results:        integer representing SP level for .NET Framework
******************************************************************/
int GetNetfxSPLevel(const TCHAR *pszNetfxRegKeyName, const TCHAR *pszNetfxRegValueName)
{
	DWORD dwRegValue=0;

	if (RegistryGetValue(HKEY_LOCAL_MACHINE, pszNetfxRegKeyName, pszNetfxRegValueName, NULL, (LPBYTE)&dwRegValue, sizeof(DWORD)))
	{
		return (int)dwRegValue;
	}

	// We can only get here if the .NET Framework is not
	// installed or there was some kind of error retrieving
	// the data from the registry
	return -1;
}


/******************************************************************
Function Name:	CheckNetfxBuildNumber
Description:	Retrieves the .NET Framework build number from
                the registry and validates that it is not a pre-release
                version number
Inputs:         NONE
Results:        true if the build number in the registry is greater
				than or equal to the passed in version; false otherwise
******************************************************************/
bool CheckNetfxBuildNumber(const TCHAR *pszNetfxRegKeyName, const TCHAR *pszNetfxRegKeyValue, const int iRequestedVersionMajor, const int iRequestedVersionMinor, const int iRequestedVersionBuild, const int iRequestedVersionRevision)
{
	TCHAR szRegValue[MAX_PATH];
	TCHAR *pszToken = NULL;
	TCHAR *pszNextToken = NULL;
	int iVersionPartCounter = 0;
	int iRegistryVersionMajor = 0;
	int iRegistryVersionMinor = 0;
	int iRegistryVersionBuild = 0;
	int iRegistryVersionRevision = 0;
	bool bRegistryRetVal = false;

	// Attempt to retrieve the build number registry value
	bRegistryRetVal = RegistryGetValue(HKEY_LOCAL_MACHINE, pszNetfxRegKeyName, pszNetfxRegKeyValue, NULL, (LPBYTE)szRegValue, MAX_PATH);

	if (bRegistryRetVal)
	{
		// This registry value should be of the format
		// #.#.#####.##.  Try to parse the 4 parts of
		// the version here
		pszToken = _tcstok_s(szRegValue, _T("."), &pszNextToken);
		while (NULL != pszToken)
		{
			iVersionPartCounter++;

			switch (iVersionPartCounter)
			{
			case 1:
				// Convert the major version value to an integer
				iRegistryVersionMajor = _tstoi(pszToken);
				break;
			case 2:
				// Convert the minor version value to an integer
				iRegistryVersionMinor = _tstoi(pszToken);
				break;
			case 3:
				// Convert the build number value to an integer
				iRegistryVersionBuild = _tstoi(pszToken);
				break;
			case 4:
				// Convert the revision number value to an integer
				iRegistryVersionRevision = _tstoi(pszToken);
				break;
			default:
				break;

			}

			// Get the next part of the version number
			pszToken = _tcstok_s(NULL, _T("."), &pszNextToken);
		}
	}

	// Compare the version number retrieved from the registry with
	// the version number of the final release of the .NET Framework 3.0
	if (iRegistryVersionMajor > iRequestedVersionMajor)
	{
		return true;
	}
	else if (iRegistryVersionMajor == iRequestedVersionMajor)
	{
		if (iRegistryVersionMinor > iRequestedVersionMinor)
		{
			return true;
		}
		else if (iRegistryVersionMinor == iRequestedVersionMinor)
		{
			if (iRegistryVersionBuild > iRequestedVersionBuild)
			{
				return true;
			}
			else if (iRegistryVersionBuild == iRequestedVersionBuild)
			{
				if (iRegistryVersionRevision >= iRequestedVersionRevision)
				{
					return true;
				}
			}
		}
	}

	// If we get here, the version in the registry must be less than the
	// version of the final release of the .NET Framework we are checking,
	// so return false
	return false;
}


bool IsCurrentOSTabletMedCenter()
{
	// Use GetSystemMetrics to detect if we are on a Tablet PC or Media Center OS  
	return ( (GetSystemMetrics(SM_TABLETPC) != 0) || (GetSystemMetrics(SM_MEDIACENTER) != 0) );
}


/******************************************************************
Function Name:	RegistryGetValue
Description:	Get the value of a reg key
Inputs:			HKEY hk - The hk of the key to retrieve
				TCHAR *pszKey - Name of the key to retrieve
				TCHAR *pszValue - The value that will be retrieved
				DWORD dwType - The type of the value that will be retrieved
				LPBYTE data - A buffer to save the retrieved data
				DWORD dwSize - The size of the data retrieved
Results:		true if successful, false otherwise
******************************************************************/
bool RegistryGetValue(HKEY hk, const TCHAR * pszKey, const TCHAR * pszValue, DWORD dwType, LPBYTE data, DWORD dwSize)
{
	HKEY hkOpened;

	// Try to open the key
	if (RegOpenKeyEx(hk, pszKey, 0, KEY_READ, &hkOpened) != ERROR_SUCCESS)
	{
		return false;
	}

	// If the key was opened, try to retrieve the value
	if (RegQueryValueEx(hkOpened, pszValue, 0, &dwType, (LPBYTE)data, &dwSize) != ERROR_SUCCESS)
	{
		RegCloseKey(hkOpened);
		return false;
	}
	
	// Clean up
	RegCloseKey(hkOpened);

	return true;
}

void  DetectFX()
{
	int iNetfx10SPLevel = -1;
	int iNetfx11SPLevel = -1;
	int iNetfx20SPLevel = -1;
	int iNetfx30SPLevel = -1;
	int iNetfx35SPLevel = -1;
	TCHAR szMessage[MAX_PATH];

	// Determine whether or not the .NET Framework
	// 1.0, 1.1, 2.0 or 3.0 are installed
	bool bNetfx10Installed = IsNetfx10Installed();
	bool bNetfx11Installed = IsNetfx11Installed();
	bool bNetfx20Installed = IsNetfx20Installed();

	// The .NET Framework 3.0 is an add-in that installs
	// on top of the .NET Framework 2.0.  For this version
	// check, validate that both 2.0 and 3.0 are installed.
	bool bNetfx30Installed = (IsNetfx20Installed() && IsNetfx30Installed());

	// The .NET Framework 3.5 is an add-in that installs
	// on top of the .NET Framework 2.0 and 3.0.  For this version
	// check, validate that 2.0, 3.0 and 3.5 are installed.
	bool bNetfx35Installed = (IsNetfx20Installed() && IsNetfx30Installed() && IsNetfx35Installed());

	// If .NET Framework 1.0 is installed, get the
	// service pack level
	if (bNetfx10Installed)
	{
		iNetfx10SPLevel = GetNetfx10SPLevel();

		if (iNetfx10SPLevel > 0)
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 1.0 service pack %i is installed."), iNetfx10SPLevel);
		else
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 1.0 is installed with no service packs."));

		MessageBox(NULL, szMessage, _T(".NET Framework 1.0"), MB_OK | MB_ICONINFORMATION);
	}
	else
	{
		MessageBox(NULL, _T(".NET Framework 1.0 is not installed."), _T(".NET Framework 1.0"), MB_OK | MB_ICONINFORMATION);
	}

	// If .NET Framework 1.1 is installed, get the
	// service pack level
	if (bNetfx11Installed)
	{
		iNetfx11SPLevel = GetNetfxSPLevel(g_szNetfx11RegKeyName, g_szNetfxStandardSPxRegValueName);

		if (iNetfx11SPLevel > 0)
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 1.1 service pack %i is installed."), iNetfx11SPLevel);
		else
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 1.1 is installed with no service packs."));

		MessageBox(NULL, szMessage, _T(".NET Framework 1.1"), MB_OK | MB_ICONINFORMATION);
	}
	else
	{
		MessageBox(NULL, _T(".NET Framework 1.1 is not installed."), _T(".NET Framework 1.1"), MB_OK | MB_ICONINFORMATION);
	}

	// If .NET Framework 2.0 is installed, get the
	// service pack level
	if (bNetfx20Installed)
	{
		iNetfx20SPLevel = GetNetfxSPLevel(g_szNetfx20RegKeyName, g_szNetfxStandardSPxRegValueName);

		if (iNetfx20SPLevel > 0)
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 2.0 service pack %i is installed."), iNetfx20SPLevel);
		else
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 2.0 is installed with no service packs."));

		MessageBox(NULL, szMessage, _T(".NET Framework 2.0"), MB_OK | MB_ICONINFORMATION);
	}
	else
	{
		MessageBox(NULL, _T(".NET Framework 2.0 is not installed."), _T(".NET Framework 2.0"), MB_OK | MB_ICONINFORMATION);
	}

	// If .NET Framework 3.0 is installed, get the
	// service pack level
	if (bNetfx30Installed)
	{
		iNetfx30SPLevel = GetNetfxSPLevel(g_szNetfx30SpRegKeyName, g_szNetfxStandardSPxRegValueName);

		if (iNetfx30SPLevel > 0)
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 3.0 service pack %i is installed."), iNetfx30SPLevel);
		else
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 3.0 is installed with no service packs."));

		MessageBox(NULL, szMessage, _T(".NET Framework 3.0"), MB_OK | MB_ICONINFORMATION);
	}
	else
	{
		MessageBox(NULL, _T(".NET Framework 3.0 is not installed."), _T(".NET Framework 3.0"), MB_OK | MB_ICONINFORMATION);
	}

	// If .NET Framework 3.5 is installed, get the
	// service pack level
	if (bNetfx35Installed)
	{
		iNetfx35SPLevel = GetNetfxSPLevel(g_szNetfx35RegKeyName, g_szNetfxStandardSPxRegValueName);

		if (iNetfx35SPLevel > 0)
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 3.5 service pack %i is installed."), iNetfx35SPLevel);
		else
			_stprintf_s(szMessage, MAX_PATH, _T(".NET Framework 3.5 is installed with no service packs."));

		MessageBox(NULL, szMessage, _T(".NET Framework 3.5"), MB_OK | MB_ICONINFORMATION);
	}
	else
	{
		MessageBox(NULL, _T(".NET Framework 3.5 is not installed."), _T(".NET Framework 3.5"), MB_OK | MB_ICONINFORMATION);
	}

}

