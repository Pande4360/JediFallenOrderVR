#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_EditableMesh {
struct EditableMesh;
}
namespace _Script_EditableMesh {
#pragma pack(push, 1)
struct EditableMeshFactory : public _Script_CoreUObject::Object {
    static _Script_CoreUObject::Class* static_class();
    _Script_EditableMesh::EditableMesh* MakeEditableMesh(_Script_Engine::PrimitiveComponent* PrimitiveComponent, int32_t LODIndex);
}; // Size: 0x28
#pragma pack(pop)
}
