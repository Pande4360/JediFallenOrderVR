#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneParameterSectionTemplate.hpp"
namespace _Script_Engine {
struct MaterialParameterCollection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneMaterialParameterCollectionTemplate : public MovieSceneParameterSectionTemplate {
    private: char pad_50[0x8]; public:
    _Script_Engine::MaterialParameterCollection*& get_MPC();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
