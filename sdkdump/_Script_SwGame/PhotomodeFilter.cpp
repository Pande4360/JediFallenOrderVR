#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "PhotomodeFilter.hpp"
void* _Script_SwGame::PhotomodeFilter::get_FilterText() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::PhotomodeFilter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.PhotomodeFilter");
    return result;
}
_Script_Engine::MaterialInterface*& _Script_SwGame::PhotomodeFilter::get_FilterMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x18);
}
