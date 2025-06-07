#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PredictProjectilePathResult.hpp"
void* _Script_Engine::PredictProjectilePathResult::get_HitResult() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::PredictProjectilePathResult::get_PathData() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PredictProjectilePathResult::get_LastTraceDestination() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::PredictProjectilePathResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PredictProjectilePathResult");
    return result;
}
