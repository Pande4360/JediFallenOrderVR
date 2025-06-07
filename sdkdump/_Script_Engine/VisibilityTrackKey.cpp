#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VisibilityTrackKey.hpp"
float& _Script_Engine::VisibilityTrackKey::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::VisibilityTrackKey::get_ActiveCondition() {
    return (void*)((uintptr_t)this + 0x5);
}
void* _Script_Engine::VisibilityTrackKey::get_Action() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::VisibilityTrackKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.VisibilityTrackKey");
    return result;
}
