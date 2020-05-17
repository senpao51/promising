#pragma once 
#include "Common.h"
#include "DataManager.h"

class ScanManager
{
public:
	static ScanManager& GetScanManagerInstance(const string& path);
public:
	void ScanDirectory(const string& path);
	void StartScan(const string& path);
private:
	ScanManager();
};