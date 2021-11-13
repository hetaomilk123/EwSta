# NewStart

## 一些有用的网站
### ubuntu软件安装
- 搜狗输入法安装：https://blog.csdn.net/weixin_38924500/article/details/106156630
- vscode安装：
  - 软件下载：https://vscode.cdn.azure.cn/stable/83bd43bc519d15e50c4272c6cf5c1479df196a4d/code_1.60.1-1631294805_amd64.deb
  - 软件安装：sudo dpkg -i code_1.60.1-1631294805_amd64.deb
  - 官网文档：https://code.visualstudio.com/docs/?dv=linux64_deb
- 访问GitHub慢解决方法：
  - sudo vim /etc/hosts，添加如下两行（可通过https://www.ipaddress.com 来查看ip地址）：
    - 140.82.114.3 github.com
    - 199.232.69.194 github.global.ssl.fastly.net
  - 刷新dns：sudo /etc/init.d/nscd restart
- 修改pip源：https://blog.csdn.net/x356982611/article/details/103597259

### 工具使用
- clion：
- vscode（暂不使用）：

### 算法
- A星算法：https://www.gamedev.net/reference/articles/article2003.asp
- Dijkstra算法: 
- KM算法:
- 整数规划: 


### 相关技术
- cmake: https://cmake.org/cmake/help/latest/command/configure_file.html
- bde：
  - https://bloomberg.github.io/bde/news/news.html
  - https://bloomberg.github.io/bde/knowledge_base/coding_standards.html#introduction
  - https://github.com/bloomberg/bde
- grpc：
  - protobuf文档：https://developers.google.cn/protocol-buffers?hl=zh-cn
  - https://github.com/grpc/grpc
- imgui：https://github.com/ocornut/imgui
- devs：
- json：https://github.com/nlohmann/json
- gtest：
- git：https://git-scm.com/book/zh/v2/Git-%E5%B7%A5%E5%85%B7-%E8%B4%AE%E8%97%8F%E4%B8%8E%E6%B8%85%E7%90%86#_git_stashing


### 详细
- 时间戳设置：https://stackoverflow.com/questions/6012663/get-unix-timestamp-with-c
- 日志系统：`boost/log/trivial.hpp` `bde`
- c++相关
  - std::lock_guard<std::mutex>

### 计算机相关
- 壁纸：https://bz.zzzmh.cn/index

### 看书记录
- 《cmake》- - 6
- 《object design》- - 205(227) appendix has finished
- 《effective c++》- - 第6章
- 《操作系统》- - 内存管理
