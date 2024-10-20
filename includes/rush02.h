char	*get_value_from_dict(char *key, char **numbers, char **values);
char	*calculate_magnitude(char *str);
char	*extract_magnitude_number(char *str);
int		is_only_zeros(char *str);
char	*get_converted_number(char *str, const char *dict_path);
int		ft_strlen(char *str);
void	ft_strcat_space(char *dest, char *src);
char	*ft_strdup(char *src);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
char	*extract_number(int *index, char *str, char **number);
int		calculate_value_size(int index, char *str);
int		is_only_space(int index, char *str);
int	parse_dictionary_lines(char **strs, char ***nums, char ***vals);
void	*ft_get_line_lens_loop(int file, int *file_sizes);
int		ft_get_lines_loop(int file, int *file_sizes, char ***lines);
int	ft_get_lines(const char *pathname, char ***lines);