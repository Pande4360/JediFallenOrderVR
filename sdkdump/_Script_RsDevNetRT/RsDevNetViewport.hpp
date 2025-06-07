#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameViewportClient.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsDevNetRT {
#pragma pack(push, 1)
struct RsDevNetViewport : public _Script_Engine::GameViewportClient {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2f0
#pragma pack(pop)
}
