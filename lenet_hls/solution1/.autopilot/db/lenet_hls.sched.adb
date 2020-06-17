<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="15">
<syndb class_id="0" tracking_level="0" version="0">
	<userIPLatency>-1</userIPLatency>
	<userIPName></userIPName>
	<cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
		<name>lenet_hls</name>
		<ret_bitwidth>0</ret_bitwidth>
		<ports class_id="2" tracking_level="0" version="0">
			<count>2</count>
			<item_version>0</item_version>
			<item class_id="3" tracking_level="1" version="0" object_id="_1">
				<Value class_id="4" tracking_level="0" version="0">
					<Obj class_id="5" tracking_level="0" version="0">
						<type>1</type>
						<id>1</id>
						<name>image_in_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo class_id="6" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>image_in.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>3</if_type>
				<array_size>0</array_size>
				<bit_vecs class_id="7" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_2">
				<Value>
					<Obj>
						<type>1</type>
						<id>2</id>
						<name>fc3_out_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>fc3_out.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<direction>1</direction>
				<if_type>3</if_type>
				<array_size>0</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
		</ports>
		<nodes class_id="8" tracking_level="0" version="0">
			<count>14</count>
			<item_version>0</item_version>
			<item class_id="9" tracking_level="1" version="0" object_id="_3">
				<Value>
					<Obj>
						<type>0</type>
						<id>19</id>
						<name>conv1_out_V</name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>377</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item class_id="10" tracking_level="0" version="0">
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second class_id="11" tracking_level="0" version="0">
									<count>1</count>
									<item_version>0</item_version>
									<item class_id="12" tracking_level="0" version="0">
										<first class_id="13" tracking_level="0" version="0">
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>377</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>conv1_out.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>47</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>1</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_4">
				<Value>
					<Obj>
						<type>0</type>
						<id>22</id>
						<name>pool1_out_V</name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>378</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>378</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>pool1_out.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>48</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>2</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_5">
				<Value>
					<Obj>
						<type>0</type>
						<id>25</id>
						<name>conv2_out_V</name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>380</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>380</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>conv2_out.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>49</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>3</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_6">
				<Value>
					<Obj>
						<type>0</type>
						<id>28</id>
						<name>pool2_out_V</name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>381</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>381</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>pool2_out.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>50</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>4</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_7">
				<Value>
					<Obj>
						<type>0</type>
						<id>31</id>
						<name>fc1_out_V</name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>383</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>383</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>fc1_out.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>51</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>5</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_8">
				<Value>
					<Obj>
						<type>0</type>
						<id>34</id>
						<name>fc2_out_V</name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>384</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>384</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>fc2_out.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>32</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>52</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>6</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_9">
				<Value>
					<Obj>
						<type>0</type>
						<id>37</id>
						<name></name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>390</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>390</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>5</count>
					<item_version>0</item_version>
					<item>54</item>
					<item>55</item>
					<item>56</item>
					<item>81</item>
					<item>82</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>7</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_10">
				<Value>
					<Obj>
						<type>0</type>
						<id>38</id>
						<name></name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>392</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>392</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>5</count>
					<item_version>0</item_version>
					<item>58</item>
					<item>59</item>
					<item>60</item>
					<item>371</item>
					<item>372</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>8</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_11">
				<Value>
					<Obj>
						<type>0</type>
						<id>39</id>
						<name></name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>394</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>394</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>7</count>
					<item_version>0</item_version>
					<item>62</item>
					<item>63</item>
					<item>64</item>
					<item>83</item>
					<item>84</item>
					<item>370</item>
					<item>373</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>9</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_12">
				<Value>
					<Obj>
						<type>0</type>
						<id>40</id>
						<name></name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>398</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>398</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>5</count>
					<item_version>0</item_version>
					<item>66</item>
					<item>67</item>
					<item>68</item>
					<item>369</item>
					<item>374</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>10</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_13">
				<Value>
					<Obj>
						<type>0</type>
						<id>41</id>
						<name></name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>402</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>402</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>7</count>
					<item_version>0</item_version>
					<item>70</item>
					<item>71</item>
					<item>72</item>
					<item>85</item>
					<item>86</item>
					<item>368</item>
					<item>375</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>11</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_14">
				<Value>
					<Obj>
						<type>0</type>
						<id>42</id>
						<name></name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>405</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>405</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>8</count>
					<item_version>0</item_version>
					<item>74</item>
					<item>75</item>
					<item>76</item>
					<item>87</item>
					<item>88</item>
					<item>365</item>
					<item>367</item>
					<item>376</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>12</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_15">
				<Value>
					<Obj>
						<type>0</type>
						<id>43</id>
						<name></name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>407</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>407</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>8</count>
					<item_version>0</item_version>
					<item>78</item>
					<item>79</item>
					<item>80</item>
					<item>89</item>
					<item>90</item>
					<item>364</item>
					<item>366</item>
					<item>377</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>13</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
			<item class_id_reference="9" object_id="_16">
				<Value>
					<Obj>
						<type>0</type>
						<id>44</id>
						<name></name>
						<fileName>lenet_hls/lenet_hls.cpp</fileName>
						<fileDirectory>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</fileDirectory>
						<lineNumber>410</lineNumber>
						<contextFuncName>lenet_hls</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/filipe/MEGA/GitHub/Neural-Network-High-Level-Synthesis-Lenet</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>lenet_hls/lenet_hls.cpp</first>
											<second>lenet_hls</second>
										</first>
										<second>410</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>0</count>
					<item_version>0</item_version>
				</oprand_edges>
				<opcode>ret</opcode>
				<m_Display>0</m_Display>
				<m_isOnCriticalPath>0</m_isOnCriticalPath>
				<m_isLCDNode>0</m_isLCDNode>
				<m_isStartOfPath>0</m_isStartOfPath>
				<m_delay>0.00</m_delay>
				<m_topoIndex>14</m_topoIndex>
				<m_clusterGroupNumber>-1</m_clusterGroupNumber>
			</item>
		</nodes>
		<consts class_id="15" tracking_level="0" version="0">
			<count>8</count>
			<item_version>0</item_version>
			<item class_id="16" tracking_level="1" version="0" object_id="_17">
				<Value>
					<Obj>
						<type>2</type>
						<id>46</id>
						<name>empty</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>64</bitwidth>
				</Value>
				<const_type>0</const_type>
				<content>1</content>
			</item>
			<item class_id_reference="16" object_id="_18">
				<Value>
					<Obj>
						<type>2</type>
						<id>53</id>
						<name>conv1</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:conv1&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_19">
				<Value>
					<Obj>
						<type>2</type>
						<id>57</id>
						<name>pool1</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:pool1&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_20">
				<Value>
					<Obj>
						<type>2</type>
						<id>61</id>
						<name>conv2</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:conv2&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_21">
				<Value>
					<Obj>
						<type>2</type>
						<id>65</id>
						<name>pool2</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:pool2&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_22">
				<Value>
					<Obj>
						<type>2</type>
						<id>69</id>
						<name>fc1</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:fc1&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_23">
				<Value>
					<Obj>
						<type>2</type>
						<id>73</id>
						<name>fc2</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:fc2&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_24">
				<Value>
					<Obj>
						<type>2</type>
						<id>77</id>
						<name>fc3</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:fc3&gt;</content>
			</item>
		</consts>
		<blocks class_id="17" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="18" tracking_level="1" version="0" object_id="_25">
				<Obj>
					<type>3</type>
					<id>45</id>
					<name>lenet_hls</name>
					<fileName></fileName>
					<fileDirectory></fileDirectory>
					<lineNumber>0</lineNumber>
					<contextFuncName></contextFuncName>
					<inlineStackInfo>
						<count>0</count>
						<item_version>0</item_version>
					</inlineStackInfo>
					<originalName></originalName>
					<rtlName></rtlName>
					<coreName></coreName>
				</Obj>
				<node_objs>
					<count>14</count>
					<item_version>0</item_version>
					<item>19</item>
					<item>22</item>
					<item>25</item>
					<item>28</item>
					<item>31</item>
					<item>34</item>
					<item>37</item>
					<item>38</item>
					<item>39</item>
					<item>40</item>
					<item>41</item>
					<item>42</item>
					<item>43</item>
					<item>44</item>
				</node_objs>
			</item>
		</blocks>
		<edges class_id="19" tracking_level="0" version="0">
			<count>51</count>
			<item_version>0</item_version>
			<item class_id="20" tracking_level="1" version="0" object_id="_26">
				<id>47</id>
				<edge_type>1</edge_type>
				<source_obj>46</source_obj>
				<sink_obj>19</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_27">
				<id>48</id>
				<edge_type>1</edge_type>
				<source_obj>46</source_obj>
				<sink_obj>22</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_28">
				<id>49</id>
				<edge_type>1</edge_type>
				<source_obj>46</source_obj>
				<sink_obj>25</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_29">
				<id>50</id>
				<edge_type>1</edge_type>
				<source_obj>46</source_obj>
				<sink_obj>28</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_30">
				<id>51</id>
				<edge_type>1</edge_type>
				<source_obj>46</source_obj>
				<sink_obj>31</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_31">
				<id>52</id>
				<edge_type>1</edge_type>
				<source_obj>46</source_obj>
				<sink_obj>34</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_32">
				<id>54</id>
				<edge_type>1</edge_type>
				<source_obj>53</source_obj>
				<sink_obj>37</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_33">
				<id>55</id>
				<edge_type>1</edge_type>
				<source_obj>19</source_obj>
				<sink_obj>37</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_34">
				<id>56</id>
				<edge_type>1</edge_type>
				<source_obj>1</source_obj>
				<sink_obj>37</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_35">
				<id>58</id>
				<edge_type>1</edge_type>
				<source_obj>57</source_obj>
				<sink_obj>38</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_36">
				<id>59</id>
				<edge_type>1</edge_type>
				<source_obj>22</source_obj>
				<sink_obj>38</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_37">
				<id>60</id>
				<edge_type>1</edge_type>
				<source_obj>19</source_obj>
				<sink_obj>38</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_38">
				<id>62</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>39</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_39">
				<id>63</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>39</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_40">
				<id>64</id>
				<edge_type>1</edge_type>
				<source_obj>22</source_obj>
				<sink_obj>39</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_41">
				<id>66</id>
				<edge_type>1</edge_type>
				<source_obj>65</source_obj>
				<sink_obj>40</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_42">
				<id>67</id>
				<edge_type>1</edge_type>
				<source_obj>28</source_obj>
				<sink_obj>40</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_43">
				<id>68</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>40</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_44">
				<id>70</id>
				<edge_type>1</edge_type>
				<source_obj>69</source_obj>
				<sink_obj>41</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_45">
				<id>71</id>
				<edge_type>1</edge_type>
				<source_obj>31</source_obj>
				<sink_obj>41</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_46">
				<id>72</id>
				<edge_type>1</edge_type>
				<source_obj>28</source_obj>
				<sink_obj>41</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_47">
				<id>74</id>
				<edge_type>1</edge_type>
				<source_obj>73</source_obj>
				<sink_obj>42</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_48">
				<id>75</id>
				<edge_type>1</edge_type>
				<source_obj>34</source_obj>
				<sink_obj>42</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_49">
				<id>76</id>
				<edge_type>1</edge_type>
				<source_obj>31</source_obj>
				<sink_obj>42</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_50">
				<id>78</id>
				<edge_type>1</edge_type>
				<source_obj>77</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_51">
				<id>79</id>
				<edge_type>1</edge_type>
				<source_obj>2</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_52">
				<id>80</id>
				<edge_type>1</edge_type>
				<source_obj>34</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_53">
				<id>81</id>
				<edge_type>1</edge_type>
				<source_obj>3</source_obj>
				<sink_obj>37</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_54">
				<id>82</id>
				<edge_type>1</edge_type>
				<source_obj>4</source_obj>
				<sink_obj>37</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_55">
				<id>83</id>
				<edge_type>1</edge_type>
				<source_obj>5</source_obj>
				<sink_obj>39</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_56">
				<id>84</id>
				<edge_type>1</edge_type>
				<source_obj>6</source_obj>
				<sink_obj>39</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_57">
				<id>85</id>
				<edge_type>1</edge_type>
				<source_obj>7</source_obj>
				<sink_obj>41</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_58">
				<id>86</id>
				<edge_type>1</edge_type>
				<source_obj>8</source_obj>
				<sink_obj>41</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_59">
				<id>87</id>
				<edge_type>1</edge_type>
				<source_obj>9</source_obj>
				<sink_obj>42</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_60">
				<id>88</id>
				<edge_type>1</edge_type>
				<source_obj>10</source_obj>
				<sink_obj>42</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_61">
				<id>89</id>
				<edge_type>1</edge_type>
				<source_obj>11</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_62">
				<id>90</id>
				<edge_type>1</edge_type>
				<source_obj>12</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_63">
				<id>364</id>
				<edge_type>4</edge_type>
				<source_obj>42</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_64">
				<id>365</id>
				<edge_type>4</edge_type>
				<source_obj>41</source_obj>
				<sink_obj>42</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_65">
				<id>366</id>
				<edge_type>4</edge_type>
				<source_obj>42</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_66">
				<id>367</id>
				<edge_type>4</edge_type>
				<source_obj>41</source_obj>
				<sink_obj>42</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_67">
				<id>368</id>
				<edge_type>4</edge_type>
				<source_obj>40</source_obj>
				<sink_obj>41</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_68">
				<id>369</id>
				<edge_type>4</edge_type>
				<source_obj>39</source_obj>
				<sink_obj>40</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_69">
				<id>370</id>
				<edge_type>4</edge_type>
				<source_obj>38</source_obj>
				<sink_obj>39</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_70">
				<id>371</id>
				<edge_type>4</edge_type>
				<source_obj>37</source_obj>
				<sink_obj>38</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_71">
				<id>372</id>
				<edge_type>4</edge_type>
				<source_obj>37</source_obj>
				<sink_obj>38</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_72">
				<id>373</id>
				<edge_type>4</edge_type>
				<source_obj>38</source_obj>
				<sink_obj>39</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_73">
				<id>374</id>
				<edge_type>4</edge_type>
				<source_obj>39</source_obj>
				<sink_obj>40</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_74">
				<id>375</id>
				<edge_type>4</edge_type>
				<source_obj>40</source_obj>
				<sink_obj>41</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_75">
				<id>376</id>
				<edge_type>4</edge_type>
				<source_obj>41</source_obj>
				<sink_obj>42</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
			<item class_id_reference="20" object_id="_76">
				<id>377</id>
				<edge_type>4</edge_type>
				<source_obj>42</source_obj>
				<sink_obj>43</sink_obj>
				<is_back_edge>0</is_back_edge>
			</item>
		</edges>
	</cdfg>
	<cdfg_regions class_id="21" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="22" tracking_level="1" version="0" object_id="_77">
			<mId>1</mId>
			<mTag>lenet_hls</mTag>
			<mType>0</mType>
			<sub_regions>
				<count>0</count>
				<item_version>0</item_version>
			</sub_regions>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>45</item>
			</basic_blocks>
			<mII>-1</mII>
			<mDepth>-1</mDepth>
			<mMinTripCount>-1</mMinTripCount>
			<mMaxTripCount>-1</mMaxTripCount>
			<mMinLatency>1294546</mMinLatency>
			<mMaxLatency>1296402</mMaxLatency>
			<mIsDfPipe>1</mIsDfPipe>
			<mDfPipe class_id="23" tracking_level="1" version="0" object_id="_78">
				<port_list class_id="24" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</port_list>
				<process_list class_id="25" tracking_level="0" version="0">
					<count>7</count>
					<item_version>0</item_version>
					<item class_id="26" tracking_level="1" version="0" object_id="_79">
						<type>0</type>
						<name>conv1_U0</name>
						<ssdmobj_id>37</ssdmobj_id>
						<pins class_id="27" tracking_level="0" version="0">
							<count>4</count>
							<item_version>0</item_version>
							<item class_id="28" tracking_level="1" version="0" object_id="_80">
								<port class_id="29" tracking_level="1" version="0" object_id="_81">
									<name>conv1_out_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id="30" tracking_level="1" version="0" object_id="_82">
									<type>0</type>
									<name>conv1_U0</name>
									<ssdmobj_id>37</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_83">
								<port class_id_reference="29" object_id="_84">
									<name>in_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_82"></inst>
							</item>
							<item class_id_reference="28" object_id="_85">
								<port class_id_reference="29" object_id="_86">
									<name>conv1_layer_bias</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_82"></inst>
							</item>
							<item class_id_reference="28" object_id="_87">
								<port class_id_reference="29" object_id="_88">
									<name>conv1_layer_weights_s</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_82"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_89">
						<type>0</type>
						<name>pool1_U0</name>
						<ssdmobj_id>38</ssdmobj_id>
						<pins>
							<count>2</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_90">
								<port class_id_reference="29" object_id="_91">
									<name>out_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_92">
									<type>0</type>
									<name>pool1_U0</name>
									<ssdmobj_id>38</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_93">
								<port class_id_reference="29" object_id="_94">
									<name>in_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_92"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_95">
						<type>0</type>
						<name>conv2_U0</name>
						<ssdmobj_id>39</ssdmobj_id>
						<pins>
							<count>4</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_96">
								<port class_id_reference="29" object_id="_97">
									<name>conv2_out_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_98">
									<type>0</type>
									<name>conv2_U0</name>
									<ssdmobj_id>39</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_99">
								<port class_id_reference="29" object_id="_100">
									<name>in_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_98"></inst>
							</item>
							<item class_id_reference="28" object_id="_101">
								<port class_id_reference="29" object_id="_102">
									<name>conv2_layer_bias</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_98"></inst>
							</item>
							<item class_id_reference="28" object_id="_103">
								<port class_id_reference="29" object_id="_104">
									<name>conv2_layer_weights</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_98"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_105">
						<type>0</type>
						<name>pool2_U0</name>
						<ssdmobj_id>40</ssdmobj_id>
						<pins>
							<count>2</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_106">
								<port class_id_reference="29" object_id="_107">
									<name>out_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_108">
									<type>0</type>
									<name>pool2_U0</name>
									<ssdmobj_id>40</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_109">
								<port class_id_reference="29" object_id="_110">
									<name>in_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_108"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_111">
						<type>0</type>
						<name>fc1_U0</name>
						<ssdmobj_id>41</ssdmobj_id>
						<pins>
							<count>4</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_112">
								<port class_id_reference="29" object_id="_113">
									<name>out_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_114">
									<type>0</type>
									<name>fc1_U0</name>
									<ssdmobj_id>41</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_115">
								<port class_id_reference="29" object_id="_116">
									<name>in_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_114"></inst>
							</item>
							<item class_id_reference="28" object_id="_117">
								<port class_id_reference="29" object_id="_118">
									<name>fc1_layer_weights</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_114"></inst>
							</item>
							<item class_id_reference="28" object_id="_119">
								<port class_id_reference="29" object_id="_120">
									<name>fc1_layer_bias</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_114"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_121">
						<type>0</type>
						<name>fc2_U0</name>
						<ssdmobj_id>42</ssdmobj_id>
						<pins>
							<count>4</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_122">
								<port class_id_reference="29" object_id="_123">
									<name>out_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_124">
									<type>0</type>
									<name>fc2_U0</name>
									<ssdmobj_id>42</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_125">
								<port class_id_reference="29" object_id="_126">
									<name>in_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
							<item class_id_reference="28" object_id="_127">
								<port class_id_reference="29" object_id="_128">
									<name>fc2_layer_weights</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
							<item class_id_reference="28" object_id="_129">
								<port class_id_reference="29" object_id="_130">
									<name>fc2_layer_bias</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_124"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_131">
						<type>0</type>
						<name>fc3_U0</name>
						<ssdmobj_id>43</ssdmobj_id>
						<pins>
							<count>4</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_132">
								<port class_id_reference="29" object_id="_133">
									<name>out_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_134">
									<type>0</type>
									<name>fc3_U0</name>
									<ssdmobj_id>43</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_135">
								<port class_id_reference="29" object_id="_136">
									<name>in_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_137">
								<port class_id_reference="29" object_id="_138">
									<name>fc3_layer_weights</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_139">
								<port class_id_reference="29" object_id="_140">
									<name>fc3_layer_bias</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
						</pins>
					</item>
				</process_list>
				<channel_list class_id="31" tracking_level="0" version="0">
					<count>6</count>
					<item_version>0</item_version>
					<item class_id="32" tracking_level="1" version="0" object_id="_141">
						<type>1</type>
						<name>conv1_out_V</name>
						<ssdmobj_id>19</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_142">
							<port class_id_reference="29" object_id="_143">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_82"></inst>
						</source>
						<sink class_id_reference="28" object_id="_144">
							<port class_id_reference="29" object_id="_145">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_92"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_146">
						<type>1</type>
						<name>pool1_out_V</name>
						<ssdmobj_id>22</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_147">
							<port class_id_reference="29" object_id="_148">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_92"></inst>
						</source>
						<sink class_id_reference="28" object_id="_149">
							<port class_id_reference="29" object_id="_150">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_98"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_151">
						<type>1</type>
						<name>conv2_out_V</name>
						<ssdmobj_id>25</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_152">
							<port class_id_reference="29" object_id="_153">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_98"></inst>
						</source>
						<sink class_id_reference="28" object_id="_154">
							<port class_id_reference="29" object_id="_155">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_108"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_156">
						<type>1</type>
						<name>pool2_out_V</name>
						<ssdmobj_id>28</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_157">
							<port class_id_reference="29" object_id="_158">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_108"></inst>
						</source>
						<sink class_id_reference="28" object_id="_159">
							<port class_id_reference="29" object_id="_160">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_114"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_161">
						<type>1</type>
						<name>fc1_out_V</name>
						<ssdmobj_id>31</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_162">
							<port class_id_reference="29" object_id="_163">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_114"></inst>
						</source>
						<sink class_id_reference="28" object_id="_164">
							<port class_id_reference="29" object_id="_165">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_166">
						<type>1</type>
						<name>fc2_out_V</name>
						<ssdmobj_id>34</ssdmobj_id>
						<ctype>0</ctype>
						<depth>2</depth>
						<bitwidth>32</bitwidth>
						<source class_id_reference="28" object_id="_167">
							<port class_id_reference="29" object_id="_168">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_124"></inst>
						</source>
						<sink class_id_reference="28" object_id="_169">
							<port class_id_reference="29" object_id="_170">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_134"></inst>
						</sink>
					</item>
				</channel_list>
				<net_list class_id="33" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</net_list>
			</mDfPipe>
		</item>
	</cdfg_regions>
	<fsm class_id="-1"></fsm>
	<res class_id="-1"></res>
	<node_label_latency class_id="36" tracking_level="0" version="0">
		<count>14</count>
		<item_version>0</item_version>
		<item class_id="37" tracking_level="0" version="0">
			<first>19</first>
			<second class_id="38" tracking_level="0" version="0">
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>22</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>25</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>28</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>31</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>34</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>37</first>
			<second>
				<first>0</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>38</first>
			<second>
				<first>2</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>39</first>
			<second>
				<first>4</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>40</first>
			<second>
				<first>6</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>41</first>
			<second>
				<first>8</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>42</first>
			<second>
				<first>10</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>43</first>
			<second>
				<first>12</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>44</first>
			<second>
				<first>13</first>
				<second>0</second>
			</second>
		</item>
	</node_label_latency>
	<bblk_ent_exit class_id="39" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="40" tracking_level="0" version="0">
			<first>45</first>
			<second class_id="41" tracking_level="0" version="0">
				<first>0</first>
				<second>13</second>
			</second>
		</item>
	</bblk_ent_exit>
	<regions class_id="42" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="43" tracking_level="1" version="0" object_id="_171">
			<region_name>lenet_hls</region_name>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>45</item>
			</basic_blocks>
			<nodes>
				<count>32</count>
				<item_version>0</item_version>
				<item>13</item>
				<item>14</item>
				<item>15</item>
				<item>16</item>
				<item>17</item>
				<item>18</item>
				<item>19</item>
				<item>20</item>
				<item>21</item>
				<item>22</item>
				<item>23</item>
				<item>24</item>
				<item>25</item>
				<item>26</item>
				<item>27</item>
				<item>28</item>
				<item>29</item>
				<item>30</item>
				<item>31</item>
				<item>32</item>
				<item>33</item>
				<item>34</item>
				<item>35</item>
				<item>36</item>
				<item>37</item>
				<item>38</item>
				<item>39</item>
				<item>40</item>
				<item>41</item>
				<item>42</item>
				<item>43</item>
				<item>44</item>
			</nodes>
			<anchor_node>-1</anchor_node>
			<region_type>16</region_type>
			<interval>0</interval>
			<pipe_depth>0</pipe_depth>
		</item>
	</regions>
	<dp_fu_nodes class_id="44" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes>
	<dp_fu_nodes_expression class_id="45" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_expression>
	<dp_fu_nodes_module>
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_module>
	<dp_fu_nodes_io>
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_io>
	<return_ports>
		<count>0</count>
		<item_version>0</item_version>
	</return_ports>
	<dp_mem_port_nodes class_id="46" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_mem_port_nodes>
	<dp_reg_nodes>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_nodes>
	<dp_regname_nodes>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_nodes>
	<dp_reg_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_phi>
	<dp_regname_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_phi>
	<dp_port_io_nodes class_id="47" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_port_io_nodes>
	<port2core class_id="48" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</port2core>
	<node2core>
		<count>0</count>
		<item_version>0</item_version>
	</node2core>
</syndb>
</boost_serialization>

