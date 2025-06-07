#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwRopeAttachmentDetectionSet.hpp"
void* _Script_SwGame::SwRopeAttachmentDetectionSet::get_Cones() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_SwGame::SwRopeAttachmentDetectionSet::get_DetectionBone() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwRopeAttachmentDetectionSet::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwRopeAttachmentDetectionSet");
    return result;
}
void* _Script_SwGame::SwRopeAttachmentDetectionSet::get_DetectionLocalOffset() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwRopeAttachmentDetectionSet::get_RopeTypes() {
    return (void*)((uintptr_t)this + 0x18);
}
