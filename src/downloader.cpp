// downloader.cpp — part of music-dl-tool.

#include "musicdltool/downloader.h"

#include <cstdio>

namespace musicdltool {

Downloader::Downloader(const std::string& config_path)
    : config_path_(config_path) {}

void Downloader::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Downloader::run() {
    if (verbose_) std::fprintf(stderr, "[music-dl-tool] downloader: run\n");
    // core logic lives here
    return true;
}

}  // namespace musicdltool
