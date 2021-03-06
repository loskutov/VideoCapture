﻿#pragma once
//#include <wincon.h>
//#include <mfobjects.h>
#include "SampleProvider.h"

class GDISampleProvider : public SampleProvider
{
public:
	GDISampleProvider(HWND hWnd);
	~GDISampleProvider();
	HRESULT GetSample(IMFSample ** ppSample) const override;
private:
	HDC hdc;
	HDC hDest;
	int width;
	int height;
	DWORD length;
	HBITMAP hbDesktop;
};
