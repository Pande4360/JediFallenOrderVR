#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_Doors_BP_Door\BP_Door_C.hpp"
#include "BP_Door_HackDoor_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_HackDoor::BP_Door_HackDoor_C::get_Zeffo_Hack_Door_Frame_02() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x6c0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_HackDoor::BP_Door_HackDoor_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Doors/DoorArchetypes/BP_Door_HackDoor.BP_Door_HackDoor_C");
    return result;
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_HackDoor::BP_Door_HackDoor_C::get_Zeffo_Hack_Door_02() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x6c8);
}
void _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_HackDoor::BP_Door_HackDoor_C::UserConstructionScript0() {
    return;
}
