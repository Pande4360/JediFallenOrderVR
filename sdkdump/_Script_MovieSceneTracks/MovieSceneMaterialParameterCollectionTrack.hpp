#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MovieSceneMaterialTrack.hpp"
namespace _Script_Engine {
struct MaterialParameterCollection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieSceneMaterialParameterCollectionTrack : public MovieSceneMaterialTrack {
    private: char pad_68[0x8]; public:
    _Script_Engine::MaterialParameterCollection*& get_MPC();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
