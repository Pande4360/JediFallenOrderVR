#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsDirectionalAnimData;
}
namespace _Script_RsGameTechRT {
struct RsReactionState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsReactionDefinitionData {
    private: char pad_0[0x18]; public:
    _Script_RsGameTechRT::RsDirectionalAnimData*& get_AnimType();
    bool get_bPutInReactionState();
    void set_bPutInReactionState(bool value);
    bool get_bRotateCharacter();
    void set_bRotateCharacter(bool value);
    _Script_RsGameTechRT::RsReactionState*& get_ReactionDescriptionTemplate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
