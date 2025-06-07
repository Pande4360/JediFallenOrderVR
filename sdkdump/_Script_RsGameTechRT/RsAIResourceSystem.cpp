#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAIResourceSystem.hpp"
void* _Script_RsGameTechRT::RsAIResourceSystem::get_ResourceClassNames() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsAIResourceSystem::get_Resources() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIResourceSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIResourceSystem");
    return result;
}
