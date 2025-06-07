#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwAttackState.hpp"
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwGrabWhiffAttackState : public SwAttackState {
    private: char pad_258[0x50]; public:
    _Script_RsGameTechRT::RsSyncDefinition*& get_SyncDefinition();
    void* get_SyncBlendSpaceInputType();
    bool get_bGrabSyncActive();
    void set_bGrabSyncActive(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnGrabStart(_Script_Engine::Actor* Victim);
}; // Size: 0x2a8
#pragma pack(pop)
}
