#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct HitResult {
    private: char pad_0[0x98]; public:
    bool get_bBlockingHit();
    void set_bBlockingHit(bool value);
    bool get_bStartPenetrating();
    void set_bStartPenetrating(bool value);
    int32_t& get_FaceIndex();
    bool get_bValidImpactedPoint();
    void set_bValidImpactedPoint(bool value);
    float& get_Time();
    float& get_Distance();
    void* get_Location();
    void* get_ImpactPoint();
    void* get_Normal();
    void* get_ImpactedPoint();
    void* get_ImpactNormal();
    void* get_TraceStart();
    void* get_TraceEnd();
    float& get_PenetrationDepth();
    int32_t& get_Item();
    void* get_PhysMaterial();
    void* get_Actor();
    void* get_Component();
    void* get_BoneName();
    void* get_MyBoneName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
