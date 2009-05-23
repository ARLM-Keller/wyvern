#include <iostream>
#include <algorithm>  // If you want to use an 
#include <numeric>  // (For Accumulate)
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

int testscore[] = {67, 56, 24, 78, 99, 87, 56, 99, 100, 97};

// predicate that evaluates a passed test
bool passed_test(int n)
{
  return (n >= 60);
}

// predicate that evaluates a failed test
bool failed_test(int n)
{
  return (n < 60);
}

int main(int argc, char* argv[])
{
  int total;
  // Initialize a vector with the data in the testscore array
  vector <int> vecTestScore(testscore, 
     testscore + sizeof(testscore) / sizeof(int));
  vector <int>::iterator vi;

  // Sort and display the vector
  sort(vecTestScore.begin(), vecTestScore.end());
  cout << "Sorted Test Scores:" << endl;
  for (vi=vecTestScore.begin(); vi != vecTestScore.end(); vi++)
  {  cout << *vi << ", ";  }
  cout << endl;

  // Display statistics

  // min_element returns an _iterator_ to the 
  // element that is the minimum value in the range
  // Therefor * operator must be used to extract the value
  vi = min_element(vecTestScore.begin(), vecTestScore.end());
  cout << "The lowest score was " << *vi << "." << endl;

  // Same with max_element
  vi = max_element(vecTestScore.begin(), vecTestScore.end());
  cout << "The highest score was " << *vi << "." << endl;

  // Use a predicate function to determine the number who passed
  cout << count_if(vecTestScore.begin(), vecTestScore.end(), passed_test) << 
    " out of " << vecTestScore.size() << 
    " students passed the test" << endl;

  // and who failed
  cout << count_if(vecTestScore.begin(), 
    vecTestScore.end(), failed_test) << 
    " out of " << vecTestScore.size() << 
    " students failed the test" << endl;

  // Sum the scores
  total = accumulate(vecTestScore.begin(), 
     vecTestScore.end(), 0);
  // Then display the Average
  cout << "Average score was " << 
    (total / (int)(vecTestScore.size())) << endl;

    map<int, int> counters;   // store each word and an associated counter
	for (vi=vecTestScore.begin(); vi != vecTestScore.end(); vi++)
	{  
		  counters[*vi]++;
	}

	for(map<int, int>::const_iterator cnst_it=counters.begin(); cnst_it!=counters.end(); cnst_it++)
	{
		cout<<"Score:"<<cnst_it->first<<'\t'<<"Number:"<<cnst_it->second<<endl;
	}
   
  set <string> strset;
  set <string>::iterator si;
  strset.insert("cantaloupes");
  strset.insert("apple");
  strset.insert("orange");
  strset.insert("banana");
  strset.insert("grapes");
  strset.insert("grapes");  
   // This one overwrites the previous occurrence
  for (si=strset.begin(); si!=strset.end(); si++)  
  {  cout << *si << " ";  }
  cout << endl;

  int inp[2][2] = {{1, 1}, {2, 0}};  
  // Regular 2x2 array to place into the template
  int i, j;
  typedef vector<int> VEC_INT;
  vector <VEC_INT> vecvec;
  // if you want to do this in all one step it looks like this
  // vector <vector <int> > vecvec;
  
  // Fill it in with the array
  VEC_INT v0(inp[0], inp[0]+2);  // passing two pointers 
    // for the range of values to be copied to the vector
  VEC_INT v1(inp[1], inp[1]+2);

  vecvec.push_back(v0);
  vecvec.push_back(v1);

  for (i=0; i<2; i++)
  {
    for (j=0; j<2; j++)
    {
      cout << vecvec[i][j] << "  ";
    }
    cout << endl;
  }
    const int N = 10;

  int a[N] = {4, 1, 1, 1, 1, 1, 0, 5, 1, 0};
  int b[N] = {4, 4, 2, 4, 2, 4, 0, 1, 5, 5};

  multiset<int> A(a, a + N);
  multiset<int> B(b, b + N);
  multiset<int> C;

  cout << "Set A: ";
  copy(A.begin(), A.end(), ostream_iterator<int>(cout, " "));
  cout << endl;
  cout << "Set B: ";
  copy(B.begin(), B.end(), ostream_iterator<int>(cout, " "));   
  cout << endl;

  cout << "Union: ";
  set_union(A.begin(), A.end(), B.begin(), B.end(),
            ostream_iterator<int>(cout, " "));
  cout << endl;

  cout << "Intersection: ";
  set_intersection(A.begin(), A.end(), B.begin(), B.end(),
                   ostream_iterator<int>(cout, " "));
  cout << endl;  

  set_difference(A.begin(), A.end(), B.begin(), B.end(),
                 inserter(C, C.begin()));
  cout << "Set C (difference of A and B): ";
  copy(C.begin(), C.end(), ostream_iterator<int>(cout, " "));
  cout << endl;

  cout<<"\t*****Reverse Vector<double>*****"<<endl;
  
  vector<double> v;
  
  double d;
  while(cin>>d) v.push_back(d);	// read elements
  if (!cin.eof()) {		// check if input failed
	  cin.clear();		// clear error state
	  string s;
	  cin >> s;		// look for terminator string
	  if (s != "end") {
		  cerr << "Sorry,format error...\n";
		  return 1;	// error return
	  }
  }
  
  cout << "Read " << v.size() << " elements\n";
  
  reverse(v.begin(),v.end());
  cout << "Elements in reverse order:\n";
  for ( int i = 0; i<v.size(); ++i) cout<< v[i] << '\t';
  cout<<endl;

  return 0;
}
