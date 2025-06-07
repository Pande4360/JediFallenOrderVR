#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraAnim.hpp"
#include "InterpGroup.hpp"
#include "InterpGroupCamera.hpp"
_Script_Engine::CameraAnim*& _Script_Engine::InterpGroupCamera::get_CameraAnimInst() {
    return *(_Script_Engine::CameraAnim**)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::InterpGroupCamera::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpGroupCamera");
    return result;
}
float& _Script_Engine::InterpGroupCamera::get_CompressTolerance() {
    return *(float*)((uintptr_t)this + 0x58);
}
