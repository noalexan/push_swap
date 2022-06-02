/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:17:15 by noalexan          #+#    #+#             */
/*   Updated: 2022/05/13 12:29:41 by noalexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <fcntl.h>
# include <sys/wait.h>

# include "structs.h"
# include "get_next_line.h"
# include "ft_printf.h"
# include "libft.h"

/* ================= ERROR ================== */

# define ERR_NO_PATH "Pipex can't access to PATH environement variable"
# define ERR_ARG "Usage: ./pipex <file1> <cmd1> <cmd2> ... <cmdn> <file2>"
# define ERR_FILE "Unable to open file %s"
# define ERR_SAME_FILE "The two files are same"
# define ERR_NO_CMD "Command %s not found"
# define ERR_FORK "Unable to fork"
# define ERR_PIPE "Unable to pipe"

/* ================= PATH =================== */

char	**set_path(char **env);
char	*find_path(char **path, char *cmd);

/* ================= CMDS =================== */

void	exec_all_cmds(char **env, char **path, char **argv, int *files);

/* ================= FILE =================== */

int		*open_files(char **argv);
char	*read_file(int fd);

/* ========================================== */

#endif
