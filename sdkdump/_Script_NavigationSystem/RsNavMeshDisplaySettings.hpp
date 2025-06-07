#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct RsNavMeshDisplaySettings {
    private: char pad_0[0x28]; public:
    void* get_AgentName();
    float& get_DrawOffset();
    bool get_bEnableDrawing();
    void set_bEnableDrawing(bool value);
    void* get_Color();
    bool get_bDrawTriangleEdges();
    void set_bDrawTriangleEdges(bool value);
    bool get_bDrawPolyEdges();
    void set_bDrawPolyEdges(bool value);
    bool get_bDrawFilledPolys();
    void set_bDrawFilledPolys(bool value);
    bool get_bDrawNavMeshEdges();
    void set_bDrawNavMeshEdges(bool value);
    bool get_bDrawTileBounds();
    void set_bDrawTileBounds(bool value);
    bool get_bDrawPathCollidingGeometry();
    void set_bDrawPathCollidingGeometry(bool value);
    bool get_bDrawTileLabels();
    void set_bDrawTileLabels(bool value);
    bool get_bDrawTileLevelInfo();
    void set_bDrawTileLevelInfo(bool value);
    bool get_bDrawPolygonLabels();
    void set_bDrawPolygonLabels(bool value);
    bool get_bDrawDefaultPolygonCost();
    void set_bDrawDefaultPolygonCost(bool value);
    bool get_bDrawLabelsOnPathNodes();
    void set_bDrawLabelsOnPathNodes(bool value);
    bool get_bDrawNavLinks();
    void set_bDrawNavLinks(bool value);
    bool get_bDrawFailedNavLinks();
    void set_bDrawFailedNavLinks(bool value);
    bool get_bDrawClusters();
    void set_bDrawClusters(bool value);
    bool get_bDrawOctree();
    void set_bDrawOctree(bool value);
    bool get_bDrawOctreeDetails();
    void set_bDrawOctreeDetails(bool value);
    bool get_bDistinctlyDrawTilesBeingBuilt();
    void set_bDistinctlyDrawTilesBeingBuilt(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
