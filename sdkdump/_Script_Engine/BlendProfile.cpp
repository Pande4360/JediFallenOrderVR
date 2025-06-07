#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BlendProfile.hpp"
#include "Skeleton.hpp"
_Script_CoreUObject::Class* _Script_Engine::BlendProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BlendProfile");
    return result;
}
_Script_Engine::Skeleton*& _Script_Engine::BlendProfile::get_OwningSkeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x30);
}
void* _Script_Engine::BlendProfile::get_ProfileEntries() {
    return (void*)((uintptr_t)this + 0x38);
}
