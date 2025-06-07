#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OffsetSmoothCSZoom.hpp"
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetSmoothCSZoom::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetSmoothCSZoom");
    return result;
}
float& _Script_SwGame::R4CameraBehavior_OffsetSmoothCSZoom::get_CSZoomMagnitude() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_OffsetSmoothCSZoom::get_CSZoomMaxTime() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_SwGame::R4CameraBehavior_OffsetSmoothCSZoom::get_ZoomCurve() {
    return (void*)((uintptr_t)this + 0x38);
}
