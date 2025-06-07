#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIDefenseComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x40]; public:
    void* get_BlockEnter();
    void* get_BlockBroken();
    void* get_BlockOver();
    static _Script_CoreUObject::Class* static_class();
    void StartBlock(_Script_RsGameTechRT::RsCharacter* Attacker, bool IsStaffAttack, void* DefenseType);
    void BlockContact(_Script_RsGameTechRT::RsCharacter* Attacker);
}; // Size: 0x1b0
#pragma pack(pop)
}
