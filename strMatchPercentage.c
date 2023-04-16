// matchThreshold is 0.0-1.0f for 0% to 100%
float strMatchPercentage(char* longer, char* shorter, int length_longer, int length_shorter, int lengthdiff, float matchThreshhold)
{
	int i, j;
	int matches = 0;
	for (i = 0; i < length_longer; i++)
	{
		for (j = 0; j < length_shorter; j++)
		{
			if (longer[i] == shorter[j])
			{
				matches++;
			}
		}

		if (((float)(matches) / (float)(length_longer)) > matchThreshhold) break;
	}

	return ((float)(matches) / (float)(length_longer));
}
