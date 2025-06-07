#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
struct SwQuicksandActor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct INT_Quicksand : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void OnStopBeingAffectedByQuicksand(_Script_SwGame::SwQuicksandActor* QuicksandActor);
    void OnStartBeingAffectedByQuicksand(_Script_SwGame::SwQuicksandActor* QuicksandActor);
}; // Size: 0x28
#pragma pack(pop)
}
