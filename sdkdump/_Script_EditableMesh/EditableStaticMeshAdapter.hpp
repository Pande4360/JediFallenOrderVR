#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EditableMeshAdapter.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EditableMesh {
#pragma pack(push, 1)
struct EditableStaticMeshAdapter : public EditableMeshAdapter {
    private: char pad_28[0xb8]; public:
    _Script_Engine::StaticMesh*& get_StaticMesh();
    _Script_Engine::StaticMesh*& get_OriginalStaticMesh();
    int32_t& get_StaticMeshLODIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
