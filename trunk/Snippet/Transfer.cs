public void PushData(Stream input, Stream output)
{
	byte[] buffer = new byte[4096]; //Page size buffer
	int bytesRead;

	while ((bytesRead = input.Read(buffer, 0, buffer.Length)) > 0)
	{
		output.Write(buffer, 0, bytesRead);
	}
}