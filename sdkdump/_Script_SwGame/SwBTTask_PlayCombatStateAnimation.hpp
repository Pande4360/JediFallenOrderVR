#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBTTask_PlayCombatStateAnimation : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x58]; public:
    void* get_AnimData();
    _Script_RsGameTechRT::RsSyncDefinition*& get_SyncDef();
    void* get_BlendspaceInputSource();
    bool get_bMaintainCharacterMotion();
    void set_bMaintainCharacterMotion(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
