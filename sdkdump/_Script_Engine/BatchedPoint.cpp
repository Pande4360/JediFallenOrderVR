#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BatchedPoint.hpp"
void* _Script_Engine::BatchedPoint::get_Position() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::BatchedPoint::get_PointSize() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_Engine::BatchedPoint::get_Color() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::BatchedPoint::get_RemainingLifeTime() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::BatchedPoint::get_DepthPriority() {
    return (void*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_Engine::BatchedPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BatchedPoint");
    return result;
}
