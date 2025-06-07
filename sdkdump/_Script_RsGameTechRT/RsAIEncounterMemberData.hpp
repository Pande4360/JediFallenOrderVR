#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIEncounterMemberData {
    private: char pad_0[0x50]; public:
    _Script_RsGameTechRT::RsAICharacter*& get_AICharacter();
    void* get_MemberClassPath();
    void* get_MemberState();
    void* get_DeathTransform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
