#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMeshSocket : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    void* get_SocketName();
    void* get_BoneName();
    void* get_RelativeLocation();
    void* get_RelativeRotation();
    void* get_RelativeScale();
    bool get_bForceAlwaysAnimated();
    void set_bForceAlwaysAnimated(bool value);
    static _Script_CoreUObject::Class* static_class();
    void InitializeSocketFromLocation(_Script_Engine::SkeletalMeshComponent* SkelComp, _Script_CoreUObject::Vector WorldLocation, _Script_CoreUObject::Vector WorldNormal);
    _Script_CoreUObject::Vector GetSocketLocation(_Script_Engine::SkeletalMeshComponent* SkelComp);
}; // Size: 0x60
#pragma pack(pop)
}
