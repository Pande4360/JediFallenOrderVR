#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Player.hpp"
namespace _Script_Engine {
struct GameViewportClient;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LocalPlayer : public Player {
    private: char pad_48[0x180]; public:
    _Script_Engine::GameViewportClient*& get_ViewportClient();
    void* get_AspectRatioAxisConstraint();
    void* get_PendingLevelPlayerControllerClass();
    bool get_bSentSplitJoin();
    void set_bSentSplitJoin(bool value);
    int32_t& get_ControllerId();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c8
#pragma pack(pop)
}
