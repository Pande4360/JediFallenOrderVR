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
struct RsSwingDirectionBasedSyncData : public RsDirectionalAnimData {
    private: char pad_30[0x60]; public:
    void* get_DirectionalSyncDefDataMapping();
    _Script_RsGameTechRT::RsSyncDefinition*& get_DefaultSyncDef();
    bool get_bUseReactorAsMasterForSync();
    void set_bUseReactorAsMasterForSync(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
