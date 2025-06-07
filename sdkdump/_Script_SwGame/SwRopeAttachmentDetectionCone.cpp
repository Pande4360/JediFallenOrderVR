#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwRopeAttachmentDetectionCone.hpp"
float& _Script_SwGame::SwRopeAttachmentDetectionCone::get_DetectionScoringDistanceScaling() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwRopeAttachmentDetectionCone::get_DetectionDistance() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwRopeAttachmentDetectionCone::get_DetectionDistanceSpeedScaling() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwRopeAttachmentDetectionCone::get_DetectionConeAngleDegrees() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwRopeAttachmentDetectionCone::get_DetectionDirection() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_SwGame::SwRopeAttachmentDetectionCone::get_DetectionScoringAlignmentScaling() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_SwGame::SwRopeAttachmentDetectionCone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwRopeAttachmentDetectionCone");
    return result;
}
