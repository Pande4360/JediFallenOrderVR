#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleSysParam {
    private: char pad_0[0x80]; public:
    void* get_Name();
    void* get_ParamType();
    float& get_Scalar();
    float& get_Scalar_Low();
    void* get_Vector();
    void* get_Vector_Low();
    void* get_Color();
    _Script_Engine::Actor*& get_Actor();
    _Script_Engine::MaterialInterface*& get_Material();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
