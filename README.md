# agt_pointcloud_map_tools

ROS 2 Humble point cloud map processing toolkit.

## Goal

Provide reusable offline tools for:

- PCD map cleaning
- Dynamic artifact removal
- Point cloud filtering
- Map conversion preparation for localization and Nav2

## Current roadmap

### Phase 1

- PCD IO
- voxel filtering
- outlier removal
- cluster based dynamic ghost cleaning
- removed/kept point cloud debug export
- CLI and ROS2 node interfaces

### Phase 2

- ground extraction
- elevation map generation
- slope map generation
- PCD to occupancy map projection

## Repository status

Initial architecture skeleton.
