//
// Created by 刘震 on 2023/5/31.
//
#pragma once
#include <string>
#include<bits/stdc++.h>
#include"ModelSliceReader.h"
#ifndef CODE_MAMASERVICE_H
#define CODE_MAMASERVICE_H
using namespace std;

class MamaService {
private:
    std::string currentVersion;		// 当前对外提供服务的版本
    std::string newVersion;			// 当前从hdfs拉取的最新版本（可能是最新，也肯能是回滚）
    std::map<std::string, ModelSliceReader> modelReaderMap;
//    BlockingQueue<...> modelData; // 消费者线程池(负责下载)
public:
    MamaService();
    ~MamaService();
    // 向ETCD 注册服务
    bool registerETCD();

    // 提供模型数据读取，拿不到就阻塞
//    char[] Get(...) {}

    // 失败情况下不断自旋重试
    bool downloadFromHDFS(std::string& hdfs_path, std::string& local_path);

    // 发送通知
    bool pushToETCD(std::string& key, std::string &value);

    std::string pullFromETCD();

    bool getCurrentVersion(std::string& hdfs_path);
};

#endif //CODE_MAMASERVICE_H
