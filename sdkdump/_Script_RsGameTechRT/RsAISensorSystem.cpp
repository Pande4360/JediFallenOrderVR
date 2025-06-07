#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAISensorSystem.hpp"
void* _Script_RsGameTechRT::RsAISensorSystem::get_Sensors() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsAISensorSystem::get_SensorDefinitions() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISensorSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISensorSystem");
    return result;
}
