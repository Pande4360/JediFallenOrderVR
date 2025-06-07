#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsDirectionalAnimData.hpp"
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsNestedAttackerDirectionAnimData : public RsDirectionalAnimData {
    private: char pad_30[0xa8]; public:
    void* get_ReactionDataMapping();
    void* get_DefaultAnimation();
    _Script_RsGameTechRT::RsSyncDefinition*& get_DefaultSyncDef();
    bool get_bUseReactorAsMasterForSync();
    void set_bUseReactorAsMasterForSync(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
