#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAISpawnerInstance.hpp"
namespace _Script_RsGameTechRT {
struct RsAICharacterDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIStagedSpawnerInstance : public RsAISpawnerInstance {
    private: char pad_c0[0x68]; public:
    void* get_AICharacterDefinitionAssetPtr();
    void* get_PatrolSettings();
    _Script_RsGameTechRT::RsAICharacterDefinition*& get_AICharacterDefinition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x128
#pragma pack(pop)
}
