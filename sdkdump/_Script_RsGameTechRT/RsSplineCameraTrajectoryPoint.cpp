#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsSplineCameraTrajectoryPoint.hpp"
float& _Script_RsGameTechRT::RsSplineCameraTrajectoryPoint::get_Time() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_RsGameTechRT::RsSplineCameraTrajectoryPoint::get_Location() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsSplineCameraTrajectoryPoint::get_SegmentUp() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_RsGameTechRT::RsSplineCameraTrajectoryPoint::get_WorldUp() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSplineCameraTrajectoryPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSplineCameraTrajectoryPoint");
    return result;
}
void* _Script_RsGameTechRT::RsSplineCameraTrajectoryPoint::get_SegmentNormal() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsSplineCameraTrajectoryPoint::get_SegmentRight() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsSplineCameraTrajectoryPoint::get_Tangent() {
    return (void*)((uintptr_t)this + 0x3c);
}
