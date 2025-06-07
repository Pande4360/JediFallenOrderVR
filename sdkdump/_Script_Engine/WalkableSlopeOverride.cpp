#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WalkableSlopeOverride.hpp"
void* _Script_Engine::WalkableSlopeOverride::get_WalkableSlopeBehavior() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::WalkableSlopeOverride::get_WalkableSlopeAngle() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::WalkableSlopeOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.WalkableSlopeOverride");
    return result;
}
