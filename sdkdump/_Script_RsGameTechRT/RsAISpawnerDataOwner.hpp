#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAISpawnerDataOwnerBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISpawnerDataOwner : public RsAISpawnerDataOwnerBase {
    private: char pad_360[0x18]; public:
    void* get_SimpleSpawners();
    bool get_bHasConvertedSpawnerInstancesToActors();
    void set_bHasConvertedSpawnerInstancesToActors(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x378
#pragma pack(pop)
}
