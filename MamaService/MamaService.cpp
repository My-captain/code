//
// Created by 单分子电子学 on 2023/5/30.
//

#include "MamaService.h"
using namespace std;

bool MamaService::downloadFromHDFS(std::string &hdfs_path, std::string &local_path) {
    return false;
}

MamaService::MamaService() {

}

MamaService::~MamaService() {

}

bool MamaService::registerETCD() {
    return false;
}

bool MamaService::pushToETCD(string &key, string &value) {
    return false;
}

std::string MamaService::pullFromETCD() {
    return std::string();
}

bool MamaService::getCurrentVersion(string &hdfs_path) {
    this->currentVersion =  "current";  // hdfs读取当前版本;
    std::vector<thread> downloadThreads;
    return false;
}

int main() {
	vector<ModelSliceReader> A(3);
	for (int i = 0; i < 3; i++) {
		cout << A[i].Load("./demo_model_slice_reader.cpp") << endl;
		char buf[128] = {0};
		cout << A[i].Read(i, 20, buf) << endl;
		cout << buf << endl;
	}
}