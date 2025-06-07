#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BatchedLine.hpp"
void* _Script_Engine::BatchedLine::get_Start() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BatchedLine::get_Color() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::BatchedLine::get_End() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::BatchedLine::get_Thickness() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::BatchedLine::get_RemainingLifeTime() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::BatchedLine::get_DepthPriority() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::BatchedLine::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BatchedLine");
    return result;
}
