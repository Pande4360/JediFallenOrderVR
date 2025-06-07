#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ListViewBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct ListView : public ListViewBase {
    private: char pad_208[0x120]; public:
    void* get_SelectionMode();
    void* get_ConsumeMouseWheel();
    bool get_bClearSelectionOnClick();
    void set_bClearSelectionOnClick(bool value);
    float& get_EntrySpacing();
    void* get_ListItems();
    void* get_BP_OnItemClicked();
    void* get_BP_OnItemDoubleClicked();
    void* get_BP_OnItemIsHoveredChanged();
    void* get_BP_OnItemSelectionChanged();
    void* get_BP_OnItemScrolledIntoView();
    static _Script_CoreUObject::Class* static_class();
    void SetSelectionMode(void* SelectionMode);
    void SetSelectedIndex(int32_t Index);
    void ScrollIndexIntoView(int32_t Index);
    void NavigateToIndex(int32_t Index);
    bool IsRefreshPending();
    int32_t GetNumItems();
    void* GetListItems();
    _Script_CoreUObject::Object* GetItemAt(int32_t Index);
    int32_t GetIndexForItem(_Script_CoreUObject::Object* Item);
    void ClearListItems();
    void BP_SetSelectedItem(_Script_CoreUObject::Object* Item);
    void BP_SetListItems(void*& InListItems);
    void BP_SetItemSelection(_Script_CoreUObject::Object* Item, bool bSelected);
    void BP_ScrollItemIntoView(_Script_CoreUObject::Object* Item);
    void BP_NavigateToItem(_Script_CoreUObject::Object* Item);
    bool BP_IsItemVisible(_Script_CoreUObject::Object* Item);
    bool BP_GetSelectedItems(void*& Items);
    _Script_CoreUObject::Object* BP_GetSelectedItem();
    int32_t BP_GetNumItemsSelected();
    void BP_ClearSelection();
    void BP_CancelScrollIntoView();
    void AddItem(_Script_CoreUObject::Object* Item);
}; // Size: 0x328
#pragma pack(pop)
}
