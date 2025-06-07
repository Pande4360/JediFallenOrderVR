#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIResource.hpp"
#include "RsAIResource_Timer.hpp"
float& _Script_RsGameTechRT::RsAIResource_Timer::get_LockoutTime() {
    return *(float*)((uintptr_t)this + 0x108);
}
float& _Script_RsGameTechRT::RsAIResource_Timer::get_MaxRandomTime() {
    return *(float*)((uintptr_t)this + 0x114);
}
void* _Script_RsGameTechRT::RsAIResource_Timer::get_LockoutMode() {
    return (void*)((uintptr_t)this + 0x10c);
}
float& _Script_RsGameTechRT::RsAIResource_Timer::get_MinRandomTime() {
    return *(float*)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIResource_Timer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIResource_Timer");
    return result;
}
