#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_CollisionTrace.hpp"
bool _Script_SwGame::R4CameraBehavior_CollisionTrace::get_bUseBaseLocationAsTraceOrigin() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
float& _Script_SwGame::R4CameraBehavior_CollisionTrace::get_TraceRadius() {
    return *(float*)((uintptr_t)this + 0x30);
}
void _Script_SwGame::R4CameraBehavior_CollisionTrace::set_bUseBaseLocationAsTraceOrigin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::R4CameraBehavior_CollisionTrace::get_TraceOriginOffsetHeight() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_SwGame::R4CameraBehavior_CollisionTrace::get_TraceOriginOffset() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::R4CameraBehavior_CollisionTrace::get_BackupTrackingPercentage() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_SwGame::R4CameraBehavior_CollisionTrace::get_BackupTrackingTime() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_SwGame::R4CameraBehavior_CollisionTrace::get_NavSurfaceOriginOffset() {
    return *(float*)((uintptr_t)this + 0x4c);
}
bool _Script_SwGame::R4CameraBehavior_CollisionTrace::get_bDoObstructionCheck() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_CollisionTrace::set_bDoObstructionCheck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::R4CameraBehavior_CollisionTrace::get_bStayAboveNavSurface() {
    return (*(uint8_t*)((uintptr_t)this + 0x52 + 0)) & 1 != 0;
}
void _Script_SwGame::R4CameraBehavior_CollisionTrace::set_bStayAboveNavSurface(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x52 + 0);
    *(uint8_t*)((uintptr_t)this + 0x52 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_CollisionTrace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_CollisionTrace");
    return result;
}
