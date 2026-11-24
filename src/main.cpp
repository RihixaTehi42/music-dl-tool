// main.cpp — entry point. Wires config and subsystems together.

#include "musicdltool/settings.h"
#include "musicdltool/matcher.h"
#include "musicdltool/downloader.h"
#include "musicdltool/tags.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    musicdltool::Settings settings = musicdltool::Settings::load_default();
    musicdltool::Matcher matcher(settings.store_path);
    musicdltool::Downloader downloader(settings.store_path);
    musicdltool::Tags tags(settings.store_path);
    std::fprintf(stderr, "[music-dl-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
