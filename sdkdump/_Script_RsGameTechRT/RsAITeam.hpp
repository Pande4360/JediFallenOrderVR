#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_RsGameTechRT {
struct RsAITeamController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAITeam : public _Script_CoreUObject::Object {
    private: char pad_28[0xc8]; public:
    _Script_RsGameTechRT::RsAITeamController*& get_TeamAIController();
    static _Script_CoreUObject::Class* static_class();
    void OnTeamMemberDied(_Script_Engine::Actor* DeadActor);
    void OnTeamMemberDestroyed(_Script_Engine::Actor* DestroyedActor);
}; // Size: 0xf0
#pragma pack(pop)
}
