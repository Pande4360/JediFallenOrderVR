#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsActorRecord {
    private: char pad_0[0xd0]; public:
    void* get_Class();
    void* get_Transform();
    void* get_UniqueIdentifier();
    void* get_ActorData();
    void* get_SerializedComponents();
    void* get_PropertyOverrides();
    bool get_bTransformSet();
    void set_bTransformSet(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
