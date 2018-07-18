// 1463.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include<stdio.h>
#include<algorithm>
int arData[1000001]{};

int main()
{
	arData[0] = 0;
	arData[1] = 0;
	arData[2] = 1;
	arData[3] = 1;

	int nData(0);
	int nMinData(0);
	int nTmpData(0);
	for (int i = 4; i < 1000001; i++)
	{
		nData = i;
		nTmpData = arData[nData - 1];
		if (nData%2 == 0)
		{
			nTmpData = std::min(arData[nData / 2], nTmpData);

		}
		if (nData%3 ==0)
		{
			nTmpData = std::min(arData[nData / 3], nTmpData);

		}

		arData[i] = nTmpData +1;
	}
	int nN(0);

	scanf_s("%d", &nN);
	printf("%d", arData[nN]);
    return 0;
}

